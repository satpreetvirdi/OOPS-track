#include <iostream>
using namespace std;

class CWH
{

protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display(){};
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazong video with title " << title << endl;
        cout << "Rating of this Video is " << rating << endl;
        cout << "Video length is " << videolength << " minutes" << endl;
    }
};

class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "The title of this Blog is " << title << endl;
        cout << "Rating of this Blog is " << rating << endl;
        cout << "Word count of this Blog is " << words << endl;
    }
};

int main()
{
    string title;
    float rating, videolength;
    int words;

    //    For Video
    title = "React JS Tutorial";
    videolength = 5.77;
    rating = 9.78;
    CWHVideo djVideo(title, rating, videolength);
    // For Blog
    title = "Typescript Tutorial";
    words = 324;
    rating = 4.198;
    CWHtext djText(title, rating, words);

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}