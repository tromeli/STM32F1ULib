/*
 * UEventPool.h
 *
 *  Created on: 2018年1月24日
 *      Author: Romeli
 */

#ifndef UEVENTPOOL_H_
#define UEVENTPOOL_H_

#include <cmsis_device.h>
#include <queue>
#include <UMisc.h>

using std::queue;

class UEventPool {
public:
	~UEventPool();
	void TryDo();
	void Insert(voidFun event);
	void Clear();
private:
	queue<voidFun> _queue;
};

#endif /* UEVENTPOOL_H_ */
