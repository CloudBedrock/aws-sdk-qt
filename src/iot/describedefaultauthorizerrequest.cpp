/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describedefaultauthorizerrequest.h"
#include "describedefaultauthorizerrequest_p.h"
#include "describedefaultauthorizerresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeDefaultAuthorizerRequest
 * \brief The DescribeDefaultAuthorizerRequest class provides an interface for IoT DescribeDefaultAuthorizer requests.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::describeDefaultAuthorizer
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDefaultAuthorizerRequest::DescribeDefaultAuthorizerRequest(const DescribeDefaultAuthorizerRequest &other)
    : IoTRequest(new DescribeDefaultAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDefaultAuthorizerRequest object.
 */
DescribeDefaultAuthorizerRequest::DescribeDefaultAuthorizerRequest()
    : IoTRequest(new DescribeDefaultAuthorizerRequestPrivate(IoTRequest::DescribeDefaultAuthorizerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDefaultAuthorizerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDefaultAuthorizerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDefaultAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDefaultAuthorizerResponse(*this, reply);
}

/*!
 * \class QtAws::IoT::DescribeDefaultAuthorizerRequestPrivate
 * \brief The DescribeDefaultAuthorizerRequestPrivate class provides private implementation for DescribeDefaultAuthorizerRequest.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DescribeDefaultAuthorizerRequestPrivate object for IoT \a action,
 * with public implementation \a q.
 */
DescribeDefaultAuthorizerRequestPrivate::DescribeDefaultAuthorizerRequestPrivate(
    const IoTRequest::Action action, DescribeDefaultAuthorizerRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDefaultAuthorizerRequest
 * class' copy constructor.
 */
DescribeDefaultAuthorizerRequestPrivate::DescribeDefaultAuthorizerRequestPrivate(
    const DescribeDefaultAuthorizerRequestPrivate &other, DescribeDefaultAuthorizerRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
