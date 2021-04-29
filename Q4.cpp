#include <bits/stdc++.h>
using namespace std;

struct AllMeetings {
    int start;
    int end;
    int position;
};
 
bool comparizing(struct AllMeetings m1, AllMeetings m2)
{
    return (m1.end < m2.end);
}

int *maxMeetings(int s[], int f[], int n)
{
    struct AllMeetings meetng[n];
    for (int i = 0; i < n; i++)
    {
        meetng[i].start = s[i];

        meetng[i].end = f[i];

        meetng[i].position = i + 1;
    }
 
    sort(meetng, meetng + n, comparizing);

    vector<int> m;

    m.push_back(meetng[0].position);

    int time_limit = meetng[0].end;

    for (int i = 1; i < n; i++) {
        if (meetng[i].start >= time_limit)
        {
            m.push_back(meetng[i].position);

            time_limit = meetng[i].end;
        }
    }

    return m.size();
}

