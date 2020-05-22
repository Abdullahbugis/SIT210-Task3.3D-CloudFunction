int ledboard = D6;



void setup() {

    pinMode(ledboard,OUTPUT); 
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", lightOn);
    


}


void loop() {

}





void lightOn(const char *event, const char *data)
{
    
    
    if (strcmp(data, "wave")==0)
    
    
    {
    
            digitalWrite(ledboard, HIGH);
            delay(1000); 
            
    
            digitalWrite(ledboard, LOW);
            delay(1000); 
            
            digitalWrite(ledboard, HIGH);
            delay(1000); 
    
            
            digitalWrite(ledboard, LOW);
            delay(1000); 
            
            
            digitalWrite(ledboard, HIGH);
            delay(1000); 
            
            digitalWrite(ledboard, LOW);
            delay(1000); 
            
            digitalWrite(ledboard, HIGH);
            delay(1000); 
            
            digitalWrite(ledboard, LOW);
            delay(1000); 
            
            digitalWrite(ledboard, HIGH);
            delay(1000); 
            
            digitalWrite(ledboard, LOW);
            delay(1000); 
    
    } else if (strcmp(data, "pat")==0)
    {
        
            digitalWrite(ledboard, HIGH);
            delay(1000); 
            
    
            digitalWrite(ledboard, LOW);
            delay(1000); 
            
            digitalWrite(ledboard, HIGH);
            delay(1000); 
    
            
            digitalWrite(ledboard, LOW);
            delay(1000); 
            
             digitalWrite(ledboard, HIGH);
            delay(1000); 
            
            digitalWrite(ledboard, LOW);
            delay(1000); 
        
        
        
        
        
    }
    
    
    
    
    
    
}

