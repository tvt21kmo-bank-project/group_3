const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');

router.post('/', 
  function(request, response) {
    if(request.body.idtilit && request.body.Pin){
      const username = request.body.idtilit;
      const password = request.body.Pin;
    
    
        login.checkPassword(username, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(password,dbResult[0].Pin, function(err,compareResult) {
                if(compareResult) {
                  console.log("Kirjautuminen onnistui!");
                  response.send(true);
                  console.log(username);
                
                }
                  else {
                    console.log("Väärä PIN.");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("ID ei löydy.");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("ID tai PIN puuttuu");
      response.send(false);
    }
  }
);

module.exports=router;