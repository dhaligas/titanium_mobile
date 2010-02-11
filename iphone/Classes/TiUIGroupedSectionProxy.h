/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"
#import "TiUITableViewGroupSection.h"
#import "TiUITableViewRowProxy.h"

@class TiUIGroupedViewProxy;
@interface TiUIGroupedSectionProxy : TiProxy<TiUITableViewRowParent> {
	TiUITableViewGroupSection *section;
	TiUIGroupedViewProxy * parent; //This is what added the section.
}

-(TiUITableViewGroupSection*)section;

#pragma mark public delegate 

- (void)insertRowAfter:(NSArray *)args;
- (void)insertRowBefore:(NSArray *)args;
- (void)deleteRow:(NSArray *)args;
- (void)updateRow:(NSArray *)args;
- (void)appendRow:(NSArray *)args;

@end
