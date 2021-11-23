const express = require('express');
const router = express.Router();
const login = require('../models/tiedot_model');

router.get('/:id',
  function(request, response) {
    if(request.params.id)
      login.checkID(request.params.id, function(dbError, dbResult){
        if(dbError) {
          response.json(dbError);
          console.log(idasiakas);
        }
        if (dbResult.length > 0) {
              console.log("success");
              response.send(true);
        } else {
            console.log("not found");
            response.send(false);
          }
      });
    });


module.exports = router;
