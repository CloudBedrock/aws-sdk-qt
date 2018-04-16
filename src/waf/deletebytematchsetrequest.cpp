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

#include "deletebytematchsetrequest.h"
#include "deletebytematchsetrequest_p.h"
#include "deletebytematchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::DeleteByteMatchSetRequest
 *
 * \brief The DeleteByteMatchSetRequest class provides an interface for WAF DeleteByteMatchSet requests.
 *
 * \ingroup WAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFClient::deleteByteMatchSet
 */

/*!
 * @brief  Constructs a new DeleteByteMatchSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteByteMatchSetRequest::DeleteByteMatchSetRequest(const DeleteByteMatchSetRequest &other)
    : WAFRequest(new DeleteByteMatchSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteByteMatchSetRequest object.
 */
DeleteByteMatchSetRequest::DeleteByteMatchSetRequest()
    : WAFRequest(new DeleteByteMatchSetRequestPrivate(WAFRequest::DeleteByteMatchSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteByteMatchSetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteByteMatchSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteByteMatchSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteByteMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteByteMatchSetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteByteMatchSetRequestPrivate
 *
 * @brief  Private implementation for DeleteByteMatchSetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteByteMatchSetRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public DeleteByteMatchSetRequest instance.
 */
DeleteByteMatchSetRequestPrivate::DeleteByteMatchSetRequestPrivate(
    const WAFRequest::Action action, DeleteByteMatchSetRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteByteMatchSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteByteMatchSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteByteMatchSetRequest instance.
 */
DeleteByteMatchSetRequestPrivate::DeleteByteMatchSetRequestPrivate(
    const DeleteByteMatchSetRequestPrivate &other, DeleteByteMatchSetRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
