//
//  GetiPlayerArgumentsController.h
//  Get_iPlayer GUI
//
//  Created by Thomas Willson on 8/3/14.
//
//

#import <Foundation/Foundation.h>

@interface GetiPlayerArgumentsController : NSObject {
   //Types
   BOOL runCacheUpdateSinceChange;
   NSString *currentTypeArgument;
}

+ (GetiPlayerArgumentsController *)sharedController;

- (NSString *)typeArgumentForCacheUpdate:(BOOL)forCacheUpdate;
- (IBAction)typeChanged:(id)sender;
- (NSString *)cacheExpiryArgument:(id)sender;

@property (readonly) NSString *profileDirArg;
@property (readonly) NSString *noWarningArg;
@property (readonly) NSString *standardListFormat;

@end
