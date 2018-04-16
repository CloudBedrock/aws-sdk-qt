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

#include "deleteconfigurationrecorderrequest.h"
#include "deleteconfigurationrecorderrequest_p.h"
#include "deleteconfigurationrecorderresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::DeleteConfigurationRecorderRequest
 *
 * \brief The DeleteConfigurationRecorderRequest class encapsulates ConfigService DeleteConfigurationRecorder requests.
 *
 * \ingroup ConfigService
 *
 *  <fullname>AWS Config</fullname>
 * 
 *  AWS Config provides a way to keep track of the configurations of all the AWS resources associated with your AWS account.
 *  You can use AWS Config to get the current and historical configurations of each AWS resource and also to get information
 *  about the relationship between the resources. An AWS resource can be an Amazon Compute Cloud (Amazon EC2) instance, an
 *  Elastic Block Store (EBS) volume, an elastic network Interface (ENI), or a security group. For a complete list of
 *  resources currently supported by AWS Config, see <a
 *  href="http://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
 *  AWS
 * 
 *  Resources</a>>
 * 
 *  You can access and manage AWS Config through the AWS Management Console, the AWS Command Line Interface (AWS CLI), the
 *  AWS Config API, or the AWS SDKs for AWS Config. This reference guide contains documentation for the AWS Config API and
 *  the AWS CLI commands that you can use to manage AWS Config. The AWS Config API uses the Signature Version 4 protocol for
 *  signing requests. For more information about how to sign a request with this protocol, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>.
 *  For detailed information about AWS Config features and their associated actions or commands, as well as how to work with
 *  AWS Management Console, see <a href="http://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What Is
 *  AWS Config</a> in the <i>AWS Config Developer
 * 
 *  Guide</i>> <ul> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> </ul> <ul> <li/>
 *  <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> <li/> </ul> <ul> <li> </li> <li/> <li/> <li/> <li/>
 *
 * \sa ConfigServiceClient::deleteConfigurationRecorder
 */

/*!
 * @brief  Constructs a new DeleteConfigurationRecorderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteConfigurationRecorderRequest::DeleteConfigurationRecorderRequest(const DeleteConfigurationRecorderRequest &other)
    : ConfigServiceRequest(new DeleteConfigurationRecorderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteConfigurationRecorderRequest object.
 */
DeleteConfigurationRecorderRequest::DeleteConfigurationRecorderRequest()
    : ConfigServiceRequest(new DeleteConfigurationRecorderRequestPrivate(ConfigServiceRequest::DeleteConfigurationRecorderAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConfigurationRecorderRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteConfigurationRecorderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteConfigurationRecorderResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConfigurationRecorderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigurationRecorderResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteConfigurationRecorderRequestPrivate
 *
 * @brief  Private implementation for DeleteConfigurationRecorderRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationRecorderRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DeleteConfigurationRecorderRequest instance.
 */
DeleteConfigurationRecorderRequestPrivate::DeleteConfigurationRecorderRequestPrivate(
    const ConfigServiceRequest::Action action, DeleteConfigurationRecorderRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationRecorderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigurationRecorderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteConfigurationRecorderRequest instance.
 */
DeleteConfigurationRecorderRequestPrivate::DeleteConfigurationRecorderRequestPrivate(
    const DeleteConfigurationRecorderRequestPrivate &other, DeleteConfigurationRecorderRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
