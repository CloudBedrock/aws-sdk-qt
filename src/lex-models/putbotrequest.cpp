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

#include "putbotrequest.h"
#include "putbotrequest_p.h"
#include "putbotresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  PutBotRequest
 *
 * @brief  Implements LexModelBuildingService PutBot requests.
 *
 * @see    LexModelBuildingServiceClient::putBot
 */

/**
 * @brief  Constructs a new PutBotResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBotResponse::PutBotResponse(

/**
 * @brief  Constructs a new PutBotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBotRequest::PutBotRequest(const PutBotRequest &other)
    : LexModelBuildingServiceRequest(new PutBotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBotRequest object.
 */
PutBotRequest::PutBotRequest()
    : LexModelBuildingServiceRequest(new PutBotRequestPrivate(LexModelBuildingServiceRequest::PutBotAction, this))
{

}

bool PutBotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * PutBotRequest::response(QNetworkReply * const reply) const
{
    return new PutBotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBotRequestPrivate
 *
 * @brief  Private implementation for PutBotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBotRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public PutBotRequest instance.
 */
PutBotRequestPrivate::PutBotRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, PutBotRequest * const q)
    : PutBotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBotRequest instance.
 */
PutBotRequestPrivate::PutBotRequestPrivate(
    const PutBotRequestPrivate &other, PutBotRequest * const q)
    : PutBotPrivate(other, q)
{

}
