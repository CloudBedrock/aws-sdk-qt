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

#include "startondemandreplicationrunrequest.h"
#include "startondemandreplicationrunrequest_p.h"
#include "startondemandreplicationrunresponse.h"
#include "smsrequest_p.h"

namespace AWS {
namespace SMS {

/**
 * @class  StartOnDemandReplicationRunRequest
 *
 * @brief  Implements SMS StartOnDemandReplicationRun requests.
 *
 * @see    SMSClient::startOnDemandReplicationRun
 */

/**
 * @brief  Constructs a new StartOnDemandReplicationRunResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartOnDemandReplicationRunResponse::StartOnDemandReplicationRunResponse(

/**
 * @brief  Constructs a new StartOnDemandReplicationRunRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartOnDemandReplicationRunRequest::StartOnDemandReplicationRunRequest(const StartOnDemandReplicationRunRequest &other)
    : SMSRequest(new StartOnDemandReplicationRunRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartOnDemandReplicationRunRequest object.
 */
StartOnDemandReplicationRunRequest::StartOnDemandReplicationRunRequest()
    : SMSRequest(new StartOnDemandReplicationRunRequestPrivate(SMSRequest::StartOnDemandReplicationRunAction, this))
{

}

bool StartOnDemandReplicationRunRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartOnDemandReplicationRunResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartOnDemandReplicationRunResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SMSClient::send
 */
AwsAbstractResponse * StartOnDemandReplicationRunRequest::response(QNetworkReply * const reply) const
{
    return new StartOnDemandReplicationRunResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartOnDemandReplicationRunRequestPrivate
 *
 * @brief  Private implementation for StartOnDemandReplicationRunRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartOnDemandReplicationRunRequestPrivate object.
 *
 * @param  action  SMS action being performed.
 * @param  q       Pointer to this object's public StartOnDemandReplicationRunRequest instance.
 */
StartOnDemandReplicationRunRequestPrivate::StartOnDemandReplicationRunRequestPrivate(
    const SMSRequest::Action action, StartOnDemandReplicationRunRequest * const q)
    : StartOnDemandReplicationRunPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartOnDemandReplicationRunRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartOnDemandReplicationRunRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartOnDemandReplicationRunRequest instance.
 */
StartOnDemandReplicationRunRequestPrivate::StartOnDemandReplicationRunRequestPrivate(
    const StartOnDemandReplicationRunRequestPrivate &other, StartOnDemandReplicationRunRequest * const q)
    : StartOnDemandReplicationRunPrivate(other, q)
{

}

} // namespace SMS
} // namespace AWS
