class Blinkers{

  private:
    byte pinLed;

  public:
  
    int brightness = 255;
    int on, max_ = 255;
    int off = 0;
    int medium = 255/2;
    
    Blinkers(byte pinLed, int brightness){
      this -> pinLed = pinLed;
      this -> brightness = brightness;

      pinMode(pinLed, OUTPUT);
    }
  
    void fade() {
    
      int brightness = off;
      int fadeamount = 5;
      
      do{
        brightness = brightness + fadeamount;
        analogWrite(pinLed,brightness);
        delay(150);
        }while (brightness != on);
      
      do{
        brightness = brightness - fadeamount;
        analogWrite(pinLed,brightness);
        delay(150);
        }while (brightness != off);
    }

     void flash(){

       analogWrite(pinLed, on);
       delay(100);
       analogWrite(pinLed,off);
       delay(100);
       
      }

      void set(){
        analogWrite(pinLed, max_);
      }

      void setTo(int settingTo){
        brightness = settingTo;
        analogWrite(pinLed,brightness);
      }
};