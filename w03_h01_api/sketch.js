var loadData;
var city = "Phoenix";
var state = "AZ";
var APIKey = '742f21765815b2e9';
function setup() {
  createCanvas(750,750);
  loadJSON("http://api.wunderground.com/api/"+APIKey+"/geolookup/conditions/q/"+state+"/"+city+".json",getData);
  
}

function getData(data){
  loadData = data;  
  var t= map(loadData.current_observation.temp_c,0,50,0,25);
  frameRate(t);
}

function draw() {
   background(0);
   if(loadData){
    var r= map(loadData.current_observation.temp_c,0,50,0,255);
    for(var i = 0; i < loadData.current_observation.temp_c; i++){
      fill(r*1.5,0,0);
      ellipse(random(width),random(height), 10, 10);
      
    }
  }
}