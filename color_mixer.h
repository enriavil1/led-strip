
#define red_pin 3
#define blue_pin 5
#define green_pin 4

char s_red[] = "red"; 
char s_blue[] = "blue";
char s_green[] = "green";

Blinkers red = Blinkers(red_pin, s_red);
Blinkers blue = Blinkers(blue_pin, s_blue);
Blinkers green = Blinkers(green_pin, s_green);

Blinkers primaryColors[] = {red, blue, green};

class Color{
  public:
    char color_name;
    int red_b = 0;
    int blue_b = 0;
    int green_b = 0;

    
    void setPrimaryColor(char _color[]) {
      color_name = _color;
      for (int i = 0; i < (sizeof(primaryColors) / sizeof(primaryColors[0])); i++) {
        if (primaryColors[i].color != _color) {
          primaryColors[i].set(false);
        }
        else {
          primaryColors[i].set(true);
        }
      }
    }

    
};