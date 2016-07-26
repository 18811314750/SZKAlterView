//
//  ViewController.m
//  SZKAlterViewDemo
//
//  Created by sunzhaokai on 16/5/30.
//  Copyright © 2016年 孙赵凯. All rights reserved.
//

#import "ViewController.h"
#import "SZKAlterView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor=[UIColor grayColor];
    
    
    SZKAlterView *lll=[SZKAlterView alterViewWithTitle:@"简书号:iOS_凯" content:@"感谢各位朋友的关注与鼓励" cancel:@"取消" sure:@"确定" cancelBtClcik:^{
        //取消按钮点击事件
        NSLog(@"取消");
    } sureBtClcik:^{
        //确定按钮点击事件
        NSLog(@"确定");
    }];
    [self.view addSubview:lll];
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
