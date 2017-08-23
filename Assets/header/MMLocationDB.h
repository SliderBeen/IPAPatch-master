//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCDataBase, WCDataBaseTable;

@interface MMLocationDB : NSObject
{
    WCDataBase *m_db;
    WCDataBaseTable *m_table;
}

@property(retain, nonatomic) WCDataBaseTable *m_table; // @synthesize m_table;
@property(retain, nonatomic) WCDataBase *m_db; // @synthesize m_db;
- (void).cxx_destruct;
- (_Bool)setAddress:(id)arg1 ByLocation:(struct CLLocationCoordinate2D)arg2;
- (id)getAddressByLocation:(struct CLLocationCoordinate2D)arg1;
- (void)closeDBBeforeInit;
- (void)closeDB;
- (void)setupDatabase;
- (id)pathForDatabase;
- (id)init;

@end

