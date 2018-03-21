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

#include "createreceiptrulerequest.h"
#include "createreceiptrulerequest_p.h"
#include "createreceiptruleresponse.h"
#include "sesrequest_p.h"

namespace AWS {
namespace SES {

/**
 * @class  CreateReceiptRuleRequest
 *
 * @brief  Implements SES CreateReceiptRule requests.
 *
 * @see    SESClient::createReceiptRule
 */

/**
 * @brief  Constructs a new CreateReceiptRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateReceiptRuleResponse::CreateReceiptRuleResponse(

/**
 * @brief  Constructs a new CreateReceiptRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateReceiptRuleRequest::CreateReceiptRuleRequest(const CreateReceiptRuleRequest &other)
    : SESRequest(new CreateReceiptRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateReceiptRuleRequest object.
 */
CreateReceiptRuleRequest::CreateReceiptRuleRequest()
    : SESRequest(new CreateReceiptRuleRequestPrivate(SESRequest::CreateReceiptRuleAction, this))
{

}

bool CreateReceiptRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateReceiptRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateReceiptRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * CreateReceiptRuleRequest::response(QNetworkReply * const reply) const
{
    return new CreateReceiptRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateReceiptRuleRequestPrivate
 *
 * @brief  Private implementation for CreateReceiptRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReceiptRuleRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public CreateReceiptRuleRequest instance.
 */
CreateReceiptRuleRequestPrivate::CreateReceiptRuleRequestPrivate(
    const SESRequest::Action action, CreateReceiptRuleRequest * const q)
    : CreateReceiptRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateReceiptRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateReceiptRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateReceiptRuleRequest instance.
 */
CreateReceiptRuleRequestPrivate::CreateReceiptRuleRequestPrivate(
    const CreateReceiptRuleRequestPrivate &other, CreateReceiptRuleRequest * const q)
    : CreateReceiptRulePrivate(other, q)
{

}

} // namespace SES
} // namespace AWS
