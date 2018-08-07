var exec = require('cordova/exec');

/**
 * IDNow plugin for Cordova
 * 
 * @constructor
 */
function IDNow () {}

var idnow = {};
var pluginName = "IDnowPlugin";

idnow.startVideoIdent = function(companyId, transactionToken, apiHost, showVideoOverviewCheck, showErrorSuccessScreen, success, error) {
    console.log(companyId, transactionToken, apiHost);
    exec(success, error, pluginName, "startVideoIdent", [companyId, transactionToken, apiHost, showVideoOverviewCheck, showErrorSuccessScreen]);
};

module.exports = idnow;
