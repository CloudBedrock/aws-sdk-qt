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

#include "describeconfigurationrecorderstatusrequest.h"
#include "describeconfigurationrecorderstatusrequest_p.h"
#include "describeconfigurationrecorderstatusresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeConfigurationRecorderStatusRequest
 *
 * @brief  Implements ConfigService DescribeConfigurationRecorderStatus requests.
 *
 * @see    ConfigServiceClient::describeConfigurationRecorderStatus
 */

/**
 * @brief  Constructs a new DescribeConfigurationRecorderStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConfigurationRecorderStatusRequest::DescribeConfigurationRecorderStatusRequest(const DescribeConfigurationRecorderStatusRequest &other)
    : ConfigServiceRequest(new DescribeConfigurationRecorderStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeConfigurationRecorderStatusRequest object.
 */
DescribeConfigurationRecorderStatusRequest::DescribeConfigurationRecorderStatusRequest()
    : ConfigServiceRequest(new DescribeConfigurationRecorderStatusRequestPrivate(ConfigServiceRequest::DescribeConfigurationRecorderStatusAction, this))
{

}

bool DescribeConfigurationRecorderStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeConfigurationRecorderStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConfigurationRecorderStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigurationRecorderStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationRecorderStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeConfigurationRecorderStatusRequestPrivate
 *
 * @brief  Private implementation for DescribeConfigurationRecorderStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationRecorderStatusRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DescribeConfigurationRecorderStatusRequest instance.
 */
DescribeConfigurationRecorderStatusRequestPrivate::DescribeConfigurationRecorderStatusRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeConfigurationRecorderStatusRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationRecorderStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationRecorderStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConfigurationRecorderStatusRequest instance.
 */
DescribeConfigurationRecorderStatusRequestPrivate::DescribeConfigurationRecorderStatusRequestPrivate(
    const DescribeConfigurationRecorderStatusRequestPrivate &other, DescribeConfigurationRecorderStatusRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
