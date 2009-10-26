/* Themes.h
 *  
 * Copyright (C) 2009 Free Software Foundation, Inc.
 *
 * Author: Riccardo Mottola <rmottola@users.sf.net>
 * Date: October 2009
 *
 * This file is part of the GNUstep ColorSchemes Themes Preference Pane
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02111 USA.
 */

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import "PreferencePanes.h"
//#import "PreviewView.h"

@interface Themes : NSPreferencePane
{
  /*    IBOutlet PreviewView   *preview;
    IBOutlet NSPopUpButton *colorSettings;
    IBOutlet NSPopUpButton *style;
    IBOutlet NSColorWell   *colorWell;

    NSDictionary *dictSchemes;
    NSDictionary *currScheme;
    NSColorList  *currColorList; */
    BOOL         loaded;
}


- (IBAction)styleAction:(id)sender;
- (IBAction)settingsAction:(id)sender;
- (IBAction)apply:(id)sender;
- (IBAction)themeChanged:(id)sender;

@end

