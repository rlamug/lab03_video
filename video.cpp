#include "video.h"
#include <iostream>
#include <string>

using namespace std;

Video::Video (string title, string url, string comment, float length, int rating){

    m_title = title;
    m_url = url;
    m_comment = comment;
    m_length = length;
    m_rating = rating;
}

void Video::print(){
    cout << m_title << ", " << m_url << ", " << m_comment << ", " << m_length << ", ";
    for (int r = m_rating; r >0; r--){
        cout << "*";
    }
    cout << endl;
}
