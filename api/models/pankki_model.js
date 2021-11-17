const pankki = require('../database');

const bank = {

    debit: function(postData, callback){
        return pankki.query('call debit_transfer(?,?,?)',
        [postData.id1, postData.id2, postData.summa],
        callback);
    },
    credit: function(postData, callback){
        return pankki.query('call credit_transfer(?,?,?)',
        [postData.id1, postData.id2, postData.summa],
        callback);
    }
};

//exportilla viedään ulos bank objekti

module.exports = bank;