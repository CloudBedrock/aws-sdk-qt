/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletereceiptrulerequest.h"
#include "deletereceiptrulerequest_p.h"
#include "deletereceiptruleresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DeleteReceiptRuleRequest
 * \brief The DeleteReceiptRuleRequest class provides an interface for SES DeleteReceiptRule requests.
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
 * \sa SesClient::deleteReceiptRule
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReceiptRuleRequest::DeleteReceiptRuleRequest(const DeleteReceiptRuleRequest &other)
    : SesRequest(new DeleteReceiptRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReceiptRuleRequest object.
 */
DeleteReceiptRuleRequest::DeleteReceiptRuleRequest()
    : SesRequest(new DeleteReceiptRuleRequestPrivate(SesRequest::DeleteReceiptRuleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReceiptRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReceiptRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReceiptRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReceiptRuleResponse(*this, reply);
}

/*!
 * \class QtAws::SES::DeleteReceiptRuleRequestPrivate
 * \brief The DeleteReceiptRuleRequestPrivate class provides private implementation for DeleteReceiptRuleRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a DeleteReceiptRuleRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DeleteReceiptRuleRequestPrivate::DeleteReceiptRuleRequestPrivate(
    const SesRequest::Action action, DeleteReceiptRuleRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReceiptRuleRequest
 * class' copy constructor.
 */
DeleteReceiptRuleRequestPrivate::DeleteReceiptRuleRequestPrivate(
    const DeleteReceiptRuleRequestPrivate &other, DeleteReceiptRuleRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
