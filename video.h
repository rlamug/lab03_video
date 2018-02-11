#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
#include <string>

using namespace std;

class Video
{
    public:
        Video (string title, string url, string comment, float length, int rating);
        void print();
    private:
    string m_title, m_url, m_comment;
    float m_length;
    int m_rating;
};
#endif
