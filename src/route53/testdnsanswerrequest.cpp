/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testdnsanswerrequest.h"
#include "testdnsanswerrequest_p.h"
#include "testdnsanswerresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::TestDNSAnswerRequest
 *
 * \brief The TestDNSAnswerRequest class provides an interface for Route53 TestDNSAnswer requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::testDNSAnswer
 */

/*!
 * @brief  Constructs a new TestDNSAnswerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TestDNSAnswerRequest::TestDNSAnswerRequest(const TestDNSAnswerRequest &other)
    : Route53Request(new TestDNSAnswerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new TestDNSAnswerRequest object.
 */
TestDNSAnswerRequest::TestDNSAnswerRequest()
    : Route53Request(new TestDNSAnswerRequestPrivate(Route53Request::TestDNSAnswerAction, this))
{

}

/*!
 * \reimp
 */
bool TestDNSAnswerRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an TestDNSAnswerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TestDNSAnswerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * TestDNSAnswerRequest::response(QNetworkReply * const reply) const
{
    return new TestDNSAnswerResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  TestDNSAnswerRequestPrivate
 *
 * @brief  Private implementation for TestDNSAnswerRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new TestDNSAnswerRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public TestDNSAnswerRequest instance.
 */
TestDNSAnswerRequestPrivate::TestDNSAnswerRequestPrivate(
    const Route53Request::Action action, TestDNSAnswerRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new TestDNSAnswerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TestDNSAnswerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TestDNSAnswerRequest instance.
 */
TestDNSAnswerRequestPrivate::TestDNSAnswerRequestPrivate(
    const TestDNSAnswerRequestPrivate &other, TestDNSAnswerRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
