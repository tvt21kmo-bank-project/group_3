const express = require('express');
const router = express.Router();
const login = require('../models/ID_numero_model');

router.get('/:id',
  function(request, response) {
    if(request.params.id)
      login.checknumero(request.params.id, function(dbError, dbResult){
        if(dbError) {
          response.json(dbError);
          console.log("ID_Numero");
        }
        if (dbResult.length > 0) {
              console.log("Nice");
              response.send(true);
            
              
        } else {
            console.log("Lol no");
            response.send(false);
          }
      });
    });


module.exports = router;