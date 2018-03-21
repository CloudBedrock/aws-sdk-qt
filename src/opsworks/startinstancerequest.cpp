/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startinstancerequest.h"
#include "startinstancerequest_p.h"
#include "startinstanceresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  StartInstanceRequest
 *
 * @brief  Implements OpsWorks StartInstance requests.
 *
 * @see    OpsWorksClient::startInstance
 */

/**
 * @brief  Constructs a new StartInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartInstanceResponse::StartInstanceResponse(

/**
 * @brief  Constructs a new StartInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartInstanceRequest::StartInstanceRequest(const StartInstanceRequest &other)
    : OpsWorksRequest(new StartInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartInstanceRequest object.
 */
StartInstanceRequest::StartInstanceRequest()
    : OpsWorksRequest(new StartInstanceRequestPrivate(OpsWorksRequest::StartInstanceAction, this))
{

}

bool StartInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * StartInstanceRequest::response(QNetworkReply * const reply) const
{
    return new StartInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartInstanceRequestPrivate
 *
 * @brief  Private implementation for StartInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartInstanceRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public StartInstanceRequest instance.
 */
StartInstanceRequestPrivate::StartInstanceRequestPrivate(
    const OpsWorksRequest::Action action, StartInstanceRequest * const q)
    : StartInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartInstanceRequest instance.
 */
StartInstanceRequestPrivate::StartInstanceRequestPrivate(
    const StartInstanceRequestPrivate &other, StartInstanceRequest * const q)
    : StartInstancePrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS
