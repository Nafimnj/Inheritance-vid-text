#include <iostream>
#include <string>
using namespace std;
class Base
{
protected:
    string title;

public:
    Base(string t)
    {
        title = t;
    }
    virtual void display(){};
};

class Video : public Base
{
protected:
    int video_length;
    float video_rating;

public:
    Video(int x, float y, string t) : Base(t)
    {
        video_length = x;
        video_rating = y;
    }
    void display()
    {
        cout << "Video Title: " << title << endl;
        cout << "Video length: " << video_length << endl;
        cout << "Video rating :" << video_rating << endl;
    }
};

class Text : public Base
{
protected:
    int text_length;
    float text_rating;

public:
    Text(int x, float y, string t) : Base(t)
    {
        text_length = x;
        text_rating = y;
    }
    void display()
    {
        cout << "Video Title: " << title << endl;
        cout << "Video length: " << text_length << endl;
        cout << "Video rating :" << text_rating << endl;
    }
};

int main()
{
    string st = "Testing.mp4";
    Video o1(34, 4.5, st);
    Base *o[2];

    o[1] = &o1;
    o[1]->display();

    string st2 = "Testing.txt";
    Text o2(255, 2.5, st2);
    o[2] = &o2;
    o[2]->display();

    return 0;
}