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

#include "updategeomatchsetrequest.h"
#include "updategeomatchsetrequest_p.h"
#include "updategeomatchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::UpdateGeoMatchSetRequest
 * \brief The UpdateGeoMatchSetRequest class provides an interface for WAF UpdateGeoMatchSet requests.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFClient::updateGeoMatchSet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGeoMatchSetRequest::UpdateGeoMatchSetRequest(const UpdateGeoMatchSetRequest &other)
    : WAFRequest(new UpdateGeoMatchSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGeoMatchSetRequest object.
 */
UpdateGeoMatchSetRequest::UpdateGeoMatchSetRequest()
    : WAFRequest(new UpdateGeoMatchSetRequestPrivate(WAFRequest::UpdateGeoMatchSetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGeoMatchSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGeoMatchSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGeoMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGeoMatchSetResponse(*this, reply);
}

/*!
 * \class QtAws::WAF::UpdateGeoMatchSetRequestPrivate
 * \brief The UpdateGeoMatchSetRequestPrivate class provides private implementation for UpdateGeoMatchSetRequest.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a UpdateGeoMatchSetRequestPrivate object for WAF \a action,
 * with public implementation \a q.
 */
UpdateGeoMatchSetRequestPrivate::UpdateGeoMatchSetRequestPrivate(
    const WAFRequest::Action action, UpdateGeoMatchSetRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGeoMatchSetRequest
 * class' copy constructor.
 */
UpdateGeoMatchSetRequestPrivate::UpdateGeoMatchSetRequestPrivate(
    const UpdateGeoMatchSetRequestPrivate &other, UpdateGeoMatchSetRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
