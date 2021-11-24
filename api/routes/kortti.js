const express = require('express');
const router = express.Router();
const pankki_kortti = require('../models/kortti_model');

router.get('/:id?',
function(request, response) {
    if (request.params.id) {
        pankki_kortti.getById(request.params.id, function(err, dbResult) {
            if (err) {
                response.json(err);
            } else {
                response.send(dbResult);
            }
        });
    } else {
        pankki_kortti.get(function(err, dbResult) {
            if (err) {
                response.json(err);
            } else {
                response.json(dbResult);
            }
        });
    }
});

router.post('/',
function(request, response) {
    console.log(request.body)
    pankki_kortti.add(request.body, function(err, dbResult) {
        if (err) {
            response.json(err);
        } else {
            response.json(request.body);
        }
    });
});

router.delete('/:id',
function(request, response) {
    pankki_kortti.delete(request.params.id, function(err, dbResult) {
        if (err) {
            response.json(err);
        } else {
            response.json(dbResult);
        }
    });
});

router.put('/:id',
function (request, response) {
    pankki_kortti.update(request.params.id, request.body, function(err, dbResult) {
        if (err) {
            response.json(err);
        } else {
            response.json(dbResult);
        }
    });
});

module.exports = router;