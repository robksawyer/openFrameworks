//
// AbstractExtractor.h
//
// $Id: //poco/1.4/Data/include/Poco/Data/AbstractExtractor.h#1 $
//
// Library: Data
// Package: DataCore
// Module:  AbstractExtractor
//
// Definition of the AbstractExtractor class.
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#ifndef Data_AbstractExtractor_INCLUDED
#define Data_AbstractExtractor_INCLUDED


#include "Poco/Data/Data.h"
#include <cstddef>


namespace Poco {
namespace Data {


class BLOB;


class Data_API AbstractExtractor
	/// Interface used to extract data from a single result row.
	/// If an extractor receives null it is not allowed to change val!
{
public:
	AbstractExtractor();
		/// Creates the AbstractExtractor.

	virtual ~AbstractExtractor();
		/// Destroys the AbstractExtractor.

	virtual bool extract(std::size_t pos, Poco::Int8& val) = 0;
		/// Extracts an Int8. Returns false if null was received.

	virtual bool extract(std::size_t pos, Poco::UInt8& val) = 0;
		/// Extracts an UInt8. Returns false if null was received.

	virtual bool extract(std::size_t pos, Poco::Int16& val) = 0;
		/// Extracts an Int16. Returns false if null was received.

	virtual bool extract(std::size_t pos, Poco::UInt16& val) = 0;
		/// Extracts an UInt16. Returns false if null was received.

	virtual bool extract(std::size_t pos, Poco::Int32& val) = 0;
		/// Extracts an Int32. Returns false if null was received.

	virtual bool extract(std::size_t pos, Poco::UInt32& val) = 0;
		/// Extracts an UInt32. Returns false if null was received.

	virtual bool extract(std::size_t pos, Poco::Int64& val) = 0;
		/// Extracts an Int64. Returns false if null was received.

	virtual bool extract(std::size_t pos, Poco::UInt64& val) = 0;
		/// Extracts an UInt64. Returns false if null was received.

	virtual bool extract(std::size_t pos, bool& val) = 0;
		/// Extracts a boolean. Returns false if null was received.

	virtual bool extract(std::size_t pos, float& val) = 0;
		/// Extracts a float. Returns false if null was received.

	virtual bool extract(std::size_t pos, double& val) = 0;
		/// Extracts a double. Returns false if null was received.

	virtual bool extract(std::size_t pos, char& val) = 0;
		/// Extracts a single character. Returns false if null was received.

	virtual bool extract(std::size_t pos, std::string& val) = 0;
		/// Extracts a string. Returns false if null was received.

	virtual bool extract(std::size_t pos, BLOB& val) = 0;
		/// Extracts a BLOB. Returns false if null was received.
};


} } // namespace Poco::Data


#endif // Data_AbstractExtractor_INCLUDED