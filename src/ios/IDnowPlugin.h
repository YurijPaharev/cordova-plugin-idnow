#import <Cordova/CDVPlugin.h>
#import <Cordova/CDVInvokedUrlCommand.h>
#import <Cordova/CDVPluginResult.h>
#import <Cordova/CDV.h>
@import IDnowSDK;

@interface IDnowPlugin : CDVPlugin

@property (strong, nonatomic) IDnowController *idnowController;
@property (strong, nonatomic) IDnowSettings	*settings;
@property (strong, nonatomic) CDVInvokedUrlCommand *globalCommand;
@property (strong, nonatomic) CDVPluginResult *pluginResult;

- (void) startVideoIdent:(CDVInvokedUrlCommand *)command;
- (void) startPhotoIdent:(CDVInvokedUrlCommand *)command;

@end