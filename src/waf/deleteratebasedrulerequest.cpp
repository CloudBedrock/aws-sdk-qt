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

#include "deleteratebasedrulerequest.h"
#include "deleteratebasedrulerequest_p.h"
#include "deleteratebasedruleresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  DeleteRateBasedRuleRequest
 *
 * @brief  Implements WAF DeleteRateBasedRule requests.
 *
 * @see    WAFClient::deleteRateBasedRule
 */

/**
 * @brief  Constructs a new DeleteRateBasedRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRateBasedRuleResponse::DeleteRateBasedRuleResponse(

/**
 * @brief  Constructs a new DeleteRateBasedRuleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRateBasedRuleRequest::DeleteRateBasedRuleRequest(const DeleteRateBasedRuleRequest &other)
    : WAFRequest(new DeleteRateBasedRuleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteRateBasedRuleRequest object.
 */
DeleteRateBasedRuleRequest::DeleteRateBasedRuleRequest()
    : WAFRequest(new DeleteRateBasedRuleRequestPrivate(WAFRequest::DeleteRateBasedRuleAction, this))
{

}

bool DeleteRateBasedRuleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteRateBasedRuleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRateBasedRuleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * DeleteRateBasedRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRateBasedRuleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteRateBasedRuleRequestPrivate
 *
 * @brief  Private implementation for DeleteRateBasedRuleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRateBasedRuleRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public DeleteRateBasedRuleRequest instance.
 */
DeleteRateBasedRuleRequestPrivate::DeleteRateBasedRuleRequestPrivate(
    const WAFRequest::Action action, DeleteRateBasedRuleRequest * const q)
    : DeleteRateBasedRulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRateBasedRuleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRateBasedRuleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRateBasedRuleRequest instance.
 */
DeleteRateBasedRuleRequestPrivate::DeleteRateBasedRuleRequestPrivate(
    const DeleteRateBasedRuleRequestPrivate &other, DeleteRateBasedRuleRequest * const q)
    : DeleteRateBasedRulePrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS
