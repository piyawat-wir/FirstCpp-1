struct Time
{
    int m, h, s;
};

int getTotalSeconds(struct Time a)
{
    return a.h*3600 + a.m*60 + a.s;
};

struct Time createTimeFromSeconds(int seconds)
{
    struct Time result;
    result.s = seconds % 60;
    result.m = (seconds / 60) % 60;
    result.h = (seconds / 3600);
    return result;
};

void getTime(struct Time &t)
{
    cout<<"\n  Hour  : "; cin>>t.h;
    cout<<"  Minute: "; cin>>t.m;
    cout<<"  Second: "; cin>>t.s;
    t = createTimeFromSeconds(getTotalSeconds(t));
};

struct Time subtract(struct Time a, struct Time b)
{
    int delta = getTotalSeconds(a) - getTotalSeconds(b);
    return createTimeFromSeconds(delta);
};


//	Write function to getTime;
//	Write function to subtract;
