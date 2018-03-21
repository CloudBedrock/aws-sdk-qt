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

#include "startstackrequest.h"
#include "startstackrequest_p.h"
#include "startstackresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  StartStackRequest
 *
 * @brief  Implements OpsWorks StartStack requests.
 *
 * @see    OpsWorksClient::startStack
 */

/**
 * @brief  Constructs a new StartStackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartStackResponse::StartStackResponse(

/**
 * @brief  Constructs a new StartStackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartStackRequest::StartStackRequest(const StartStackRequest &other)
    : OpsWorksRequest(new StartStackRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartStackRequest object.
 */
StartStackRequest::StartStackRequest()
    : OpsWorksRequest(new StartStackRequestPrivate(OpsWorksRequest::StartStackAction, this))
{

}

bool StartStackRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartStackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartStackResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * StartStackRequest::response(QNetworkReply * const reply) const
{
    return new StartStackResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartStackRequestPrivate
 *
 * @brief  Private implementation for StartStackRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartStackRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public StartStackRequest instance.
 */
StartStackRequestPrivate::StartStackRequestPrivate(
    const OpsWorksRequest::Action action, StartStackRequest * const q)
    : StartStackPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartStackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartStackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartStackRequest instance.
 */
StartStackRequestPrivate::StartStackRequestPrivate(
    const StartStackRequestPrivate &other, StartStackRequest * const q)
    : StartStackPrivate(other, q)
{

}
