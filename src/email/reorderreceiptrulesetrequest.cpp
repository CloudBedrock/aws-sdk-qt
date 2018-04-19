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

#include "reorderreceiptrulesetrequest.h"
#include "reorderreceiptrulesetrequest_p.h"
#include "reorderreceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::ReorderReceiptRuleSetRequest
 * \brief The ReorderReceiptRuleSetRequest class provides an interface for SES ReorderReceiptRuleSet requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SESClient::reorderReceiptRuleSet
 */

/*!
 * Constructs a copy of \a other.
 */
ReorderReceiptRuleSetRequest::ReorderReceiptRuleSetRequest(const ReorderReceiptRuleSetRequest &other)
    : SESRequest(new ReorderReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ReorderReceiptRuleSetRequest object.
 */
ReorderReceiptRuleSetRequest::ReorderReceiptRuleSetRequest()
    : SESRequest(new ReorderReceiptRuleSetRequestPrivate(SESRequest::ReorderReceiptRuleSetAction, this))
{

}

/*!
 * \reimp
 */
bool ReorderReceiptRuleSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ReorderReceiptRuleSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ReorderReceiptRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new ReorderReceiptRuleSetResponse(*this, reply);
}

/*!
 * \class QtAws::SES::ReorderReceiptRuleSetRequestPrivate
 * \brief The ReorderReceiptRuleSetRequestPrivate class provides private implementation for ReorderReceiptRuleSetRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a ReorderReceiptRuleSetRequestPrivate object for SES \a action,
 * with public implementation \a q.
 */
ReorderReceiptRuleSetRequestPrivate::ReorderReceiptRuleSetRequestPrivate(
    const SESRequest::Action action, ReorderReceiptRuleSetRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ReorderReceiptRuleSetRequest
 * class' copy constructor.
 */
ReorderReceiptRuleSetRequestPrivate::ReorderReceiptRuleSetRequestPrivate(
    const ReorderReceiptRuleSetRequestPrivate &other, ReorderReceiptRuleSetRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
