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

#include "createreceiptfilterrequest.h"
#include "createreceiptfilterrequest_p.h"
#include "createreceiptfilterresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  CreateReceiptFilterRequest
 *
 * @brief  Implements SES CreateReceiptFilter requests.
 *
 * @see    SESClient::createReceiptFilter
 */

/**
 * @brief  Constructs a new CreateReceiptFilterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateReceiptFilterResponse::CreateReceiptFilterResponse(

/**
 * @brief  Constructs a new CreateReceiptFilterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateReceiptFilterRequest::CreateReceiptFilterRequest(const CreateReceiptFilterRequest &other)
    : SESRequest(new CreateReceiptFilterRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateReceiptFilterRequest object.
 */
CreateReceiptFilterRequest::CreateReceiptFilterRequest()
    : SESRequest(new CreateReceiptFilterRequestPrivate(SESRequest::CreateReceiptFilterAction, this))
{

}

bool CreateReceiptFilterRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateReceiptFilterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateReceiptFilterResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * CreateReceiptFilterRequest::response(QNetworkReply * const reply) const
{
    return new CreateReceiptFilterResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateReceiptFilterRequestPrivate
 *
 * @brief  Private implementation for CreateReceiptFilterRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReceiptFilterRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public CreateReceiptFilterRequest instance.
 */
CreateReceiptFilterRequestPrivate::CreateReceiptFilterRequestPrivate(
    const SESRequest::Action action, CreateReceiptFilterRequest * const q)
    : CreateReceiptFilterPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateReceiptFilterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateReceiptFilterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateReceiptFilterRequest instance.
 */
CreateReceiptFilterRequestPrivate::CreateReceiptFilterRequestPrivate(
    const CreateReceiptFilterRequestPrivate &other, CreateReceiptFilterRequest * const q)
    : CreateReceiptFilterPrivate(other, q)
{

}
