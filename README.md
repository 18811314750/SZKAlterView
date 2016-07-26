# SZKAlterView
iOS开发-轻松学会封装自定义视图view（自定义弹框封装详解）

详细介绍-简书博客：http://www.jianshu.com/p/de2ecfd770c2

在ViewController.m中 导入"SZKAlterView.h"头文件
调用代码：

    SZKAlterView *lll=[SZKAlterView alterViewWithTitle:@"简书号:iOS_凯" content:@"感谢各位朋友的关注与鼓励" cancel:@"取消" sure:@"确定" cancelBtClcik:^{
        //取消按钮点击事件
        NSLog(@"取消");
    } sureBtClcik:^{
        //确定按钮点击事件
        NSLog(@"确定");
    }];
    [self.view addSubview:lll];

实现方法：
SZKAlterView.h 中
```
#import <UIKit/UIKit.h>

//取消按钮点击事件
typedef void(^cancelBlock)();

//确定按钮点击事件
typedef void(^sureBlock)();

@interface SZKAlterView : UIView

@property(nonatomic,copy)cancelBlock cancel_block;
@property(nonatomic,copy)sureBlock sure_block;
/**
 *  简书号：iOS_凯  http://www.jianshu.com/users/86b0ddc92021/latest_articles
 *
 *  @param title       标题
 *  @param content     内容
 *  @param cancel      取消按钮内容
 *  @param sure        确定按钮内容
 *  @param cancelBlock 取消按钮点击事件
 *  @param sureBlock   确定按钮点击事件
 *
 *  @return SZKAlterView
 */
+(instancetype)alterViewWithTitle:(NSString *)title
                          content:(NSString *)content
                           cancel:(NSString *)cancel
                             sure:(NSString *)sure
                    cancelBtClcik:(cancelBlock)cancelBlock
                      sureBtClcik:(sureBlock)sureBlock;

@end
```

详细介绍-简书博客：http://www.jianshu.com/p/de2ecfd770c2

