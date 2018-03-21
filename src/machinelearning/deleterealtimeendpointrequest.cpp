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

#include "deleterealtimeendpointrequest.h"
#include "deleterealtimeendpointrequest_p.h"
#include "deleterealtimeendpointresponse.h"
#include "machinelearningrequest_p.h"

namespace AWS {
namespace MachineLearning {

/**
 * @class  DeleteRealtimeEndpointRequest
 *
 * @brief  Implements MachineLearning DeleteRealtimeEndpoint requests.
 *
 * @see    MachineLearningClient::deleteRealtimeEndpoint
 */

/**
 * @brief  Constructs a new DeleteRealtimeEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRealtimeEndpointResponse::DeleteRealtimeEndpointResponse(

/**
 * @brief  Constructs a new DeleteRealtimeEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRealtimeEndpointRequest::DeleteRealtimeEndpointRequest(const DeleteRealtimeEndpointRequest &other)
    : MachineLearningRequest(new DeleteRealtimeEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRealtimeEndpointRequest object.
 */
DeleteRealtimeEndpointRequest::DeleteRealtimeEndpointRequest()
    : MachineLearningRequest(new DeleteRealtimeEndpointRequestPrivate(MachineLearningRequest::DeleteRealtimeEndpointAction, this))
{

}

bool DeleteRealtimeEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRealtimeEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRealtimeEndpointResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
AwsAbstractResponse * DeleteRealtimeEndpointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRealtimeEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRealtimeEndpointRequestPrivate
 *
 * @brief  Private implementation for DeleteRealtimeEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRealtimeEndpointRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public DeleteRealtimeEndpointRequest instance.
 */
DeleteRealtimeEndpointRequestPrivate::DeleteRealtimeEndpointRequestPrivate(
    const MachineLearningRequest::Action action, DeleteRealtimeEndpointRequest * const q)
    : DeleteRealtimeEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRealtimeEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRealtimeEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRealtimeEndpointRequest instance.
 */
DeleteRealtimeEndpointRequestPrivate::DeleteRealtimeEndpointRequestPrivate(
    const DeleteRealtimeEndpointRequestPrivate &other, DeleteRealtimeEndpointRequest * const q)
    : DeleteRealtimeEndpointPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace AWS
