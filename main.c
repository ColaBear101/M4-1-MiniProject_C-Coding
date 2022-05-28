#include <stdio.h>

#define RESET "\x1B[0m" //รีเซ็ทสี
#define RED   "\x1B[31m" //แดง
#define GRN   "\x1B[32m" //เขียว
#define YEL   "\x1B[33m" //เหลือง
#define BLU   "\x1B[34m" //น้ำเงิน
#define MAG   "\x1B[35m" //ม่วง
#define CYN   "\x1B[36m" //ฟ้า
#define WHT   "\x1B[37m" //ขาว
#define GRYS  "\x1B[90m" //เทา
#define PNK   "\x1B[95m" //ชมพูงานวัด
#define PNKS  "\x1B[91m" //ชมพู
#define GRNS  "\x1B[92m" //เขียวอ่อน
#define YELS  "\x1B[93m" //เหลืองอ่อน
#define BLUS  "\x1B[94m" //น้ำเงินอ่อน
#define CYNS  "\x1B[96m" //ฟ้าอ่อน
#define WHTS  "\x1B[97m" //ขาวอ่อน


void setup();

void th();
void thput();
void theory();

void en();
void enput();
void eneory();

void legs(int);

void threpeat();
void enrepeat();

int main(void) {
  int o;

  
  system("clear");
  setup();
  scanf("%d", &o);
  system("clear");



  switch (o){
  case 1:
    sleep(1);
    enput();
    break;

  case 2:
    sleep(1);
    thput();
    break;    

  default:
    for (int i = 1; i <= 1000; i++) {
    printf(RED"EROR: (1) EROR: (1) EROR: (1) EROR: (1) EROR: (1)\n");
    return 0;
    }
  }

  return 0;
}



void setup(){
  puts(PNK "||----------------โปรแกรมคำนวณพื้นที่ผิวช้างหรรษา---------------||");
  puts(BLU "||                             ░░░░░░░░░░                 ||");                             
  puts(    "||                   ░░░░░░░░░░░░░░░░░░░░░░               ||");                           
  puts(    "||                 ░░░░░░░░░░░░░░░░░░░░░░░░░░             ||");                              
  puts(    "||               ░░░░░░░░░░░░░░░░░░░░░░░░░░░░             ||");                              
  puts(    "||               ░░░░░░░░░░░░░░░░░░░░░░░░░░░░             ||");                              
  puts(    "||     ░░        ░░░░██░░░░░░░░░░░░░░░░░░░░░░░░           ||");                            
  puts(    "||     ░░        ░░░░"PNKS"▒▒▒▒"BLU"░░░░░░░░░░░░░░░░░░░░░░░░         ||");                          
  puts(    "||     ░░░░      ░░░░"PNKS"▒▒▒▒"BLU"░░░░░░░░░░░░░░░░░░░░░░░░         ||");                          
  puts(    "||     ░░░░    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░  ░░   ||");                    
  puts(    "||     ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░  ░░     ||");                      
  puts(    "||       ░░░░░░░░░░    ░░░░░░░░░░░░░░░░░░░░░░░░░░         ||");                          
  puts(    "||         ░░░░░░      ░░░░░░░░░░░░░░░░░░░░░░░░░░         ||");                          
  puts(    "||                     ░░░░  ░░░░      ░░░░  ░░░░         ||");                          
  puts(    "||                     ░░░░  ░░░░      ░░░░  ░░░░         ||");                          
  puts(    "||                     "WHTS"▒▒"BLU"░░  "WHTS"▒▒"BLU"░░      "WHTS"▒▒"BLU"░░  "WHTS"▒▒"BLU"░░         ||");
  puts(GRN "||====================╔╦╦╦═╦╗╔═╦═╦══╦═╗===================||");
  puts(YELS"||::::::::::::::::::::║║║║╦╣╚╣╠╣║║║║║╦╣:::::::::::::::::::||");
  puts(GRN "||====================╚══╩═╩═╩═╩═╩╩╩╩═╝===================||");
  puts(CYNS"|| เลือกภาษาเพื่อเริ่มต้นใช้งาน | Select a language to get start ||");
  puts(BLU "||Select | 1 - to choose English language                 ||");
  puts(YELS"||    กด | 2 - เพื่อเลือกภาษาไทย                             ||");
  printf(WHTS"|| :> ");
}



  void enput(){
    float h,ffc,s;
  puts(PNKS"||========================================================||");
  puts(CYN "||                           THEORY                       ||");                          
  puts(PNK "||Estimation of the total surface area in indian elephants||");                          
  puts(CYN "||        S = -8.245 + (6.807 x h) + (7.703 x ffc)        ||");                          
  puts(PNKS"||========================================================||");
    printf(WHT"The height at the shoulders (m): "WHT);
    scanf("%f",&h);
    printf("The fore footpad circumference(h): "WHT);
    scanf("%f",&ffc);
    s = -8.245 + (6.807*h) + (7.703*ffc);
    system("clear");
    legs(h);
    printf(WHTS"S = -8.245 + (6.807 x %.1f) + (7.703 x %.1f)\n",h,ffc);
    printf(YELS"The total surface area is "RED"%.2f "YELS"m^2\n\n\n" ,s);  
    enrepeat();
  }


  void thput(){
    float h,ffc,s;
  puts(BLU"||========================================================||");    
  puts(PNK"||                           สูตร                          ||");                          
  puts(RED"||                     พื้นที่ผิวช้างหาได้จาก                    ||");                          
  puts(GRN"||            S = -8.245 + (6.807 x h) + (7.703 x ffc)    ||");                          
  puts(BLU"||========================================================||");
    printf(WHT"\nความสูงถึงไหล่ช้าง (เมตร): "WHT);
    scanf("%f",&h);
    printf("เส้นรอบวงของเท้าหน้าช้าง (เมตร): "WHT);
    scanf("%f",&ffc);
    s = -8.245 + (6.807*h) + (7.703*ffc);
    system("clear");
    legs(h);    
    printf(WHTS"S = -8.245 + (6.807 x %.1f) + (7.703 x %.1f)\n",h,ffc);
    printf(YELS"พื้นที่ผิวตัวช้าง คือ "RED"%.2f " YELS"เมตร^2\n\n\n" ,s);      
    threpeat();
  }


  void legs(h){
  puts(BLU "||=================================================||");                           
  puts(    "||                          ░░░░░░░░░░             ||");         //เปิด                  
  puts(    "||                ░░░░░░░░░░░░░░░░░░░░░░           ||");                           
  puts(    "||              ░░░░░░░░░░░░░░░░░░░░░░░░░░         ||");                              
  puts(    "||            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░         ||");                              
  puts(    "||            ░░░░░░░░░░░░░░░░░░░░░░░░░░░░         ||");                              
  puts(    "||  ░░        ░░░░██░░░░░░░░░░░░░░░░░░░░░░░░       ||");                            
  puts(    "||  ░░        ░░░░"PNKS"▒▒▒▒"BLU"░░░░░░░░░░░░░░░░░░░░░░░░     ||");                          
  puts(    "||  ░░░░      ░░░░"PNKS"▒▒▒▒"BLU"░░░░░░░░░░░░░░░░░░░░░░░░     ||");                          
  puts(    "||  ░░░░    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░  ░░|");                    
  puts(    "||  ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░  ░░ ||");                      
  puts(    "||    ░░░░░░░░░░    ░░░░░░░░░░░░░░░░░░░░░░░░░░     ||");                          
  puts(    "||      ░░░░░░      ░░░░░░░░░░░░░░░░░░░░░░░░░░     ||"); 
    for (int i = 1; i <= h; i+=3){
  puts(    "||                  ░░░░  ░░░░      ░░░░  ░░░░     ||");          //บรรทัดนี้ซ้ำ
    }
  puts(    "||                  "WHTS"▒▒"BLU"░░  "WHTS"▒▒"BLU"░░      "WHTS"▒▒"BLU"░░  "WHTS"▒▒"BLU"░░     ||"); //ปิด
  puts(    "||=================================================||\n");                           
    
  }

void enrepeat(){
  int rep;
  printf(GRNS"Do you want to calculate more? (1 for YES 2 for NO) : ");
  scanf("%d",&rep);
  if (rep == 1){
    system("clear");    
    enput();
  
  }
  else {
    printf(PNKS"Thanks for using our service nya desu~~~. >~<\n");
  }

}

void threpeat(){
  int rep;
  printf(GRNS"ต้องการที่จะคำนวณเพิ่มหรือไม่? (ใช่กด 1 ไม่ใช่ กด 2) : ");
  scanf("%d",&rep);

  if (rep == 1){
    system("clear");
    thput();
  
  }
  else {
    printf(PNKS"ขอบคุณที่ใช้บริการขอให้คุณพี่มีความสุขความเจริญ\n");
  }

}
