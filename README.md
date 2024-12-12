# uiautomator_eventsparser_cpp
Very fast parser for Android uiautomator events to CSV written in C++ (low CPU/memory usage)




```sh
#csv header is: 

TimeStampInt
AccessibilityDataSensitive
AccessibilityFocused
AccessibilityTool
Action
Active
AddedCount
BeforeText
BooleanProperties
Checked
ClassName
ConnectionId
ContentChangeTypes
ContentDescription
ContentInvalid
CurrentItemIndex
Empty
Enabled
EventTime
EventType
Focused
FromIndex
FullScreen
ItemCount
Loggable
MaxScrollX
MaxScrollY
MovementGranularity
PackageName
ParcelableData
Password
Records
RemovedCount
ScrollDeltaX
ScrollDeltaY
ScrollX
ScrollY
Scrollable
Sealed
Source
SourceDisplayId
SourceNodeId
SourceWindowId
SpeechStateChangeTypes
Text
TimeNow
TimeStamp
ToIndex
WindowChangeTypes
WindowChanges
WindowId
recordCount


# compile and run with zig or gcc 
zig c++ -std=c++2a -O3 -g0 eventparser.cpp && a "adb -s 127.0.0.1:5565 shell uiautomator events" 

"1734028235070","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","637734","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-112","0","61","true","","","","","","","","","12-12 15:30:35.70 ","-1","","","","0"
"1734028235080","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","637835","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","-12","true","","","","","","","","","12-12 15:30:35.80 ","-1","","","","0"
"1734028235082","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","637852","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","-11","true","","","","","","","","","12-12 15:30:35.82 ","-1","","","","0"
"1734028235082","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","637852","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-144","0","-11","true","","","","","","","","","12-12 15:30:35.82 ","-1","","","","0"
"1734028235092","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","637952","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","0","true","","","","","","","","","12-12 15:30:35.92 ","-1","","","","0"
"1734028235094","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","637968","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","15","0","0","true","","","","","","","","","12-12 15:30:35.94 ","-1","","","","0"
"1734028236040","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","638434","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","23","true","","","","","","","","","12-12 15:30:36.40 ","-1","","","","0"
"1734028236050","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","638534","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","111","true","","","","","","","","","12-12 15:30:36.50 ","-1","","","","0"
"1734028236050","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","638534","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","111","0","111","true","","","","","","","","","12-12 15:30:36.50 ","-1","","","","0"
"1734028236060","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","638634","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","215","true","","","","","","","","","12-12 15:30:36.60 ","-1","","","","0"
"1734028236060","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","638634","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","104","0","215","true","","","","","","","","","12-12 15:30:36.60 ","-1","","","","0"
"1734028236070","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","638734","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","319","true","","","","","","","","","12-12 15:30:36.70 ","-1","","","","0"
"1734028236070","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","638734","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","104","0","319","true","","","","","","","","","12-12 15:30:36.70 ","-1","","","","0"
"1734028236080","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","638834","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","408","true","","","","","","","","","12-12 15:30:36.80 ","-1","","","","0"
"1734028236080","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","638834","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","89","0","408","true","","","","","","","","","12-12 15:30:36.80 ","-1","","","","0"
"1734028236099","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","639018","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","394","true","","","","","","","","","12-12 15:30:36.99 ","-1","","","","0"
"1734028237009","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","639118","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","289","true","","","","","","","","","12-12 15:30:37.09 ","-1","","","","0"
"1734028237009","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","639118","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-119","0","289","true","","","","","","","","","12-12 15:30:37.09 ","-1","","","","0"
"1734028237019","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","639218","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","185","true","","","","","","","","","12-12 15:30:37.19 ","-1","","","","0"
"1734028237020","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","639234","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-104","0","185","true","","","","","","","","","12-12 15:30:37.20 ","-1","","","","0"
"1734028237030","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","639335","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","76","true","","","","","","","","","12-12 15:30:37.30 ","-1","","","","0"
"1734028237030","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","639335","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-129","0","76","true","","","","","","","","","12-12 15:30:37.30 ","-1","","","","0"
"1734028237042","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","639451","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","0","true","","","","","","","","","12-12 15:30:37.42 ","-1","","","","0"
"1734028237042","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","639451","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-152","0","0","true","","","","","","","","","12-12 15:30:37.42 ","-1","","","","0"
"1734028237052","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","639551","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","9","true","","","","","","","","","12-12 15:30:37.52 ","-1","","","","0"
"1734028237054","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","639568","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","26","true","","","","","","","","","12-12 15:30:37.54 ","-1","","","","0"
"1734028237054","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","639568","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","15","0","26","true","","","","","","","","","12-12 15:30:37.54 ","-1","","","","0"
"1734028237064","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","639668","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","130","true","","","","","","","","","12-12 15:30:37.64 ","-1","","","","0"
"1734028237065","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","639684","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","104","0","130","true","","","","","","","","","12-12 15:30:37.65 ","-1","","","","0"
"1734028237074","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","639768","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","234","true","","","","","","","","","12-12 15:30:37.74 ","-1","","","","0"
"1734028237075","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","639784","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","104","0","234","true","","","","","","","","","12-12 15:30:37.75 ","-1","","","","0"
"1734028237084","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","639868","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","340","true","","","","","","","","","12-12 15:30:37.84 ","-1","","","","0"
"1734028237085","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","639884","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","106","0","340","true","","","","","","","","","12-12 15:30:37.85 ","-1","","","","0"
"1734028237094","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","639968","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","408","true","","","","","","","","","12-12 15:30:37.94 ","-1","","","","0"
"1734028237095","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","639984","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","68","0","408","true","","","","","","","","","12-12 15:30:37.95 ","-1","","","","0"
"1734028238010","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","640134","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","398","true","","","","","","","","","12-12 15:30:38.10 ","-1","","","","0"
"1734028238020","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","640234","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","312","true","","","","","","","","","12-12 15:30:38.20 ","-1","","","","0"
"1734028238020","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","640234","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-96","0","312","true","","","","","","","","","12-12 15:30:38.20 ","-1","","","","0"
"1734028238030","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","640334","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","204","true","","","","","","","","","12-12 15:30:38.30 ","-1","","","","0"
"1734028238030","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","640334","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-108","0","204","true","","","","","","","","","12-12 15:30:38.30 ","-1","","","","0"
"1734028238040","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","640434","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","99","true","","","","","","","","","12-12 15:30:38.40 ","-1","","","","0"
"1734028238040","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","640434","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-105","0","99","true","","","","","","","","","12-12 15:30:38.40 ","-1","","","","0"
"1734028238050","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","640534","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","4","true","","","","","","","","","12-12 15:30:38.50 ","-1","","","","0"
"1734028238050","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","640535","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-169","0","4","true","","","","","","","","","12-12 15:30:38.50 ","-1","","","","0"
"1734028238060","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","640634","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","-4","true","","","","","","","","","12-12 15:30:38.60 ","-1","","","","0"
"1734028238062","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","640651","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","-2","true","","","","","","","","","12-12 15:30:38.62 ","-1","","","","0"
"1734028238062","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","640651","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-12","0","-2","true","","","","","","","","","12-12 15:30:38.62 ","-1","","","","0"
"1734028238072","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","640751","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","103","true","","","","","","","","","12-12 15:30:38.72 ","-1","","","","0"
"1734028238074","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","640768","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","121","true","","","","","","","","","12-12 15:30:38.74 ","-1","","","","0"
"1734028238074","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","640768","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","123","0","121","true","","","","","","","","","12-12 15:30:38.74 ","-1","","","","0"
"1734028238084","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","640868","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","226","true","","","","","","","","","12-12 15:30:38.84 ","-1","","","","0"
"1734028238085","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","640884","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","105","0","226","true","","","","","","","","","12-12 15:30:38.85 ","-1","","","","0"
"1734028238094","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","640968","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","331","true","","","","","","","","","12-12 15:30:38.94 ","-1","","","","0"
"1734028238095","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","640984","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","105","0","331","true","","","","","","","","","12-12 15:30:38.95 ","-1","","","","0"
"1734028239004","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","641068","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","408","true","","","","","","","","","12-12 15:30:39.04 ","-1","","","","0"
"1734028239005","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","641084","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","77","0","408","true","","","","","","","","","12-12 15:30:39.05 ","-1","","","","0"
"1734028239019","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","641218","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","398","true","","","","","","","","","12-12 15:30:39.19 ","-1","","","","0"
"1734028239029","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","641318","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","295","true","","","","","","","","","12-12 15:30:39.29 ","-1","","","","0"
"1734028239029","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","641318","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-113","0","295","true","","","","","","","","","12-12 15:30:39.29 ","-1","","","","0"
"1734028239039","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","641418","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","191","true","","","","","","","","","12-12 15:30:39.39 ","-1","","","","0"
"1734028239040","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","641434","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-104","0","191","true","","","","","","","","","12-12 15:30:39.40 ","-1","","","","0"
"1734028239049","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","641518","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","91","true","","","","","","","","","12-12 15:30:39.49 ","-1","","","","0"
"1734028239050","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","641535","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","74","true","","","","","","","","","12-12 15:30:39.50 ","-1","","","","0"
"1734028239051","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","641535","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-148","0","74","true","","","","","","","","","12-12 15:30:39.51 ","-1","","","","0"
"1734028239062","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","641651","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","5","true","","","","","","","","","12-12 15:30:39.62 ","-1","","","","0"
"1734028239062","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","641651","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-138","0","5","true","","","","","","","","","12-12 15:30:39.62 ","-1","","","","0"
"1734028239072","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","641751","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","-9","true","","","","","","","","","12-12 15:30:39.72 ","-1","","","","0"
"1734028239074","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","641768","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","-7","true","","","","","","","","","12-12 15:30:39.74 ","-1","","","","0"
"1734028239074","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","641768","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","-24","0","-7","true","","","","","","","","","12-12 15:30:39.74 ","-1","","","","0"
"1734028239084","","","","0","","-1","null","","false","android.widget.ScrollView","","CONTENT_CHANGE_TYPE_SUBTREE","null","","-1","","true","641868","TYPE_WINDOW_CONTENT_CHANGED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","-1","-1","0","0","true","","","","","","","","","12-12 15:30:39.84 ","-1","","","","0"
"1734028239085","","","","0","","-1","null","","false","android.widget.ScrollView","","","null","","-1","","true","641884","TYPE_VIEW_SCROLLED","","-1","false","-1","","0","408","0","com.bluestacks.settings","null","false","","-1","0","14","0","0","true","","","","","","","","","12-12 15:30:39.85 ","-1","","","","0"```