int a[]={13,12,11,10,9};

void setup() {
  // put your setup code here, to run once:

  pinMode(13,OUTPUT);
    pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);

  pinMode(2,INPUT);
    pinMode(10,INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  int result1;
  int result2;


  result1=digitalRead(2);
  result2=digitalRead(1);


  if(result1==0&&result2==0)
  {
    for(int i=0;i<5;i++)
    {
    digitalWrite(a[i],1);
    delay(1000);
      digitalWrite(a[i],0);
    delay(1000);
    }
   
    
  }
   if(result1==1&&result2==1)
  {
    for(int j=5;j>0;j--)
    {
    digitalWrite(a[j],1);
    delay(1000);
      digitalWrite(a[j],0);
    delay(1000);
    }
    
  }

}
