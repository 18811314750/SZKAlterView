//
//  SZKAlterView.h
//  热点资讯
//
//  Created by sunzhaokai on 16/5/30.
//  Copyright © 2016年 孙赵凯. All rights reserved.
//

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
