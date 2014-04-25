iOS-XMLParser
=============

A generic xml parser which parser all xml and convert into equivalent NSDictionary using Apple's NSXMLParser 

Way to use it

1. Import CXMLParser.h in your file

2. How to use it

    NSString* strXML= [[NSBundle mainBundle] pathForResource:@"Info" ofType:@"xml"];
    NSData* data=[NSData dataWithContentsOfFile:strXML];
    NSDictionary* dictionary =[CXMLParser dictionaryForXMLData:data error:nil];
    
    
    
Find more information about this class is here

https://sites.google.com/site/greateindiaclub/mobil-apps/ios/convertxmltonsdictionaryinios
