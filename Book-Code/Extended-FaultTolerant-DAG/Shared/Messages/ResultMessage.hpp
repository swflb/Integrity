/*
Copyright (c) 2015 James Dean Mathias

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef _RESULTMESSAGE_HPP_
#define _RESULTMESSAGE_HPP_

#include "MessagePBMixIn.hpp"

namespace Messages
{
	template<typename T>
	class ResultMessage : public MessagePBMixIn<T>
	{
	public:
		ResultMessage(Type type) :
		MessagePBMixIn<T>(type)
		{
		}

		ResultMessage(Type type, uint64_t taskId) :
		MessagePBMixIn<T>(type)
		{
		this->m_message.set_taskid(taskId);
		}

		uint64_t getTaskId()
		{
		return this->m_message.taskid();
		}
	};
}

#endif // _RESULTMESSAGE_HPP_
