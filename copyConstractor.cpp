using namespace std;
#include <iostream>

class Button
{
public:
    int hight, width;
    char *text, *color;
    Button(int h, int w, char *bt, char *bc)
    {
        hight = h;
        width = w;
        text = bt;
        color = bc;
    }
    Button(Button &ref)
    {
        hight = ref.hight;
        width = ref.width;
        text = ref.text;
        color = ref.color;
    }
    void print()
    {
        cout << "Height " << hight << " Width " << width << " Text " << text << " Color " << color << endl;
    }
};
int main()
{
    Button b1(150, 200, "Send", "Green");
    b1.print();
    Button b2(b1);
    b2.print();
    // acces variable and chenge value
    b2.hight = 100;
    b2.text = "receive";
    b2.color = "red";
    b2.print();
    return 0;
}