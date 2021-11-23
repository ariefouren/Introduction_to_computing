int& func()
{
    int x = 5;
    return x;
}

int main() 
{
    int& y = func();
    y++;
}