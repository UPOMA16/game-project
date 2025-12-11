#include <SFML/Graphics.hpp>
#include <time.h>
#include <sstream>
using namespace sf;

struct point
{
    int x, y;
};

int main()
{
    srand(time(0));

    RenderWindow app(VideoMode(400, 533), "Doodle Game!");
    app.setFramerateLimit(60);

    
    Texture t1, t2, t3;
    t1.loadFromFile("images/background.png");
    t2.loadFromFile("images/platform.png");
    t3.loadFromFile("images/doodle.png");

    Sprite sBackground(t1), sPlat(t2), sPers(t3);

    
    point plat[20];
    for (int i = 0; i < 20; i++)
    {
        plat[i].x = rand() % 400;
        plat[i].y = rand() % 533;
    }

    int x = 100, y = 100, h = 200;
    float dx = 0, dy = 0;

    int score = 0;

    
    Font font;
    if (!font.loadFromFile("E:\\Game\\gameproject\\gameproject\\AovelSansRounded-rdDL.ttf"))
    {
        
        return -1;
    }

    Text tScore;
    tScore.setFont(font);
    tScore.setCharacterSize(24);
    tScore.setFillColor(Color::Black); 

    bool gameOver = false;

    
    Text tGameOver;
    tGameOver.setFont(font);
    tGameOver.setCharacterSize(40);
    tGameOver.setFillColor(Color::Red);
    tGameOver.setString("GAME OVER");
    tGameOver.setPosition(80, 180);

    
    Text tRestart;
    tRestart.setFont(font);
    tRestart.setCharacterSize(24);
    tRestart.setFillColor(Color::Red);
    tRestart.setString("Press R to Restart");
    tRestart.setPosition(70, 250);

    while (app.isOpen())
    {
        Event e;
        while (app.pollEvent(e))
        {
            if (e.type == Event::Closed)
                app.close();
        }

        
        if (gameOver && Keyboard::isKeyPressed(Keyboard::R))
        {
            gameOver = false;
            score = 0;
            x = 100; y = 100; dy = 0;
            for (int i = 0; i < 20; i++)
            {
                plat[i].x = rand() % 400;
                plat[i].y = rand() % 533;
            }
        }

        if (!gameOver)
        {
            
            if (Keyboard::isKeyPressed(Keyboard::Right)) x += 3;
            if (Keyboard::isKeyPressed(Keyboard::Left)) x -= 3;

            if (x < -50) x = 400;
            if (x > 400) x = -50;

            
            dy += 0.2;
            y += dy;

            if (y > 500) gameOver = true; 

            
            if (y < h)
            {
                for (int i = 0; i < 20; i++)
                {
                    y = h;
                    plat[i].y -= dy;
                    if (plat[i].y > 533)
                    {
                        plat[i].y = 0;
                        plat[i].x = rand() % 400;
                        score += 10; 
                    }
                }
            }

            
            for (int i = 0; i < 20; i++)
            {
                if ((x + 50 > plat[i].x) && (x + 20 < plat[i].x + 68)
                    && (y + 70 > plat[i].y) && (y + 70 < plat[i].y + 14) && (dy > 0))
                {
                    dy = -10;
                }
            }
        }

        
        sPers.setPosition(x, y);

        
        app.clear();
        app.draw(sBackground);

        for (int i = 0; i < 20; i++)
        {
            sPlat.setPosition(plat[i].x, plat[i].y);
            app.draw(sPlat);
        }

        app.draw(sPers);

        
        std::stringstream ss;
        ss << "Score: " << score;
        tScore.setString(ss.str());
        tScore.setPosition(10, 10);
        app.draw(tScore);

        
        if (gameOver)
        {
            app.draw(tGameOver);
            app.draw(tRestart);
        }

        app.display();
    }

    return 0;
}