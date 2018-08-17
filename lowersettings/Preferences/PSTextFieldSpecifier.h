/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSSpecifier.h"

@class NSString;

@interface PSTextFieldSpecifier : PSSpecifier {
	SEL bestGuess;
@private
	NSString* _placeholder;
}
+(id)preferenceSpecifierNamed:(id)named target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(int)cell edit:(Class)edit;
-(id)placeholder;
-(void)setPlaceholder:(id)placeholder;
-(void)dealloc;
@end
