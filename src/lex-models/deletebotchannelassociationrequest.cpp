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

#include "deletebotchannelassociationrequest.h"
#include "deletebotchannelassociationrequest_p.h"
#include "deletebotchannelassociationresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteBotChannelAssociationRequest
 *
 * @brief  Implements LexModelBuildingService DeleteBotChannelAssociation requests.
 *
 * @see    LexModelBuildingServiceClient::deleteBotChannelAssociation
 */

/**
 * @brief  Constructs a new DeleteBotChannelAssociationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBotChannelAssociationResponse::DeleteBotChannelAssociationResponse(

/**
 * @brief  Constructs a new DeleteBotChannelAssociationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBotChannelAssociationRequest::DeleteBotChannelAssociationRequest(const DeleteBotChannelAssociationRequest &other)
    : LexModelBuildingServiceRequest(new DeleteBotChannelAssociationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBotChannelAssociationRequest object.
 */
DeleteBotChannelAssociationRequest::DeleteBotChannelAssociationRequest()
    : LexModelBuildingServiceRequest(new DeleteBotChannelAssociationRequestPrivate(LexModelBuildingServiceRequest::DeleteBotChannelAssociationAction, this))
{

}

bool DeleteBotChannelAssociationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBotChannelAssociationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBotChannelAssociationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * DeleteBotChannelAssociationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBotChannelAssociationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBotChannelAssociationRequestPrivate
 *
 * @brief  Private implementation for DeleteBotChannelAssociationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBotChannelAssociationRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public DeleteBotChannelAssociationRequest instance.
 */
DeleteBotChannelAssociationRequestPrivate::DeleteBotChannelAssociationRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, DeleteBotChannelAssociationRequest * const q)
    : DeleteBotChannelAssociationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBotChannelAssociationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBotChannelAssociationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBotChannelAssociationRequest instance.
 */
DeleteBotChannelAssociationRequestPrivate::DeleteBotChannelAssociationRequestPrivate(
    const DeleteBotChannelAssociationRequestPrivate &other, DeleteBotChannelAssociationRequest * const q)
    : DeleteBotChannelAssociationPrivate(other, q)
{

}
