//
//  DDParserTypes.h
//  DDMathParser
//
//  Created by Dave DeLong on 12/4/10.
//  Copyright 2010 Home. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
	DDOperatorAssociativityLeft = 0,
	DDOperatorAssociativityRight = 1
} DDOperatorAssociativity;

typedef enum {
	DDTokenTypeNumber = 0,
	DDTokenTypeOperator = 1,
	DDTokenTypeFunction = 2,
	DDTokenTypeVariable = 3
} DDTokenType;

typedef enum {
	DDOperatorInvalid = 0,
    
    DDOperatorLogicalOr,
    DDOperatorLogicalAnd,
    DDOperatorLogicalNot,
	
	DDOperatorBitwiseOr,
	DDOperatorBitwiseXor,
	DDOperatorBitwiseAnd,
	DDOperatorLeftShift,
	DDOperatorRightShift,
	DDOperatorMinus,
	DDOperatorAdd,
	DDOperatorDivide,
	DDOperatorMultiply,
	DDOperatorModulo,
	DDOperatorBitwiseNot,
	DDOperatorFactorial,
	DDOperatorPower,
	DDOperatorParenthesisOpen,
	DDOperatorParenthesisClose,
	
	DDOperatorComma,
	DDOperatorUnaryMinus,
	DDOperatorUnaryPlus
} DDOperator;

typedef enum {
    DDOperatorArityUnknown = 0,
    
    DDOperatorArityUnary,
    DDOperatorArityBinary
} DDOperatorArity;
